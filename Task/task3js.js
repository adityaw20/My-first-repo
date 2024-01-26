document.addEventListener("DOMContentLoaded", function () {
    const newTaskInput = document.getElementById("newTask");
    const taskList = document.getElementById("taskList");

    window.addTask = function () {
        const taskText = newTaskInput.value.trim();

        if (taskText !== "") {
            const li = document.createElement("li");
            li.innerHTML = `
                <span>${taskText}</span>
                <button onclick="removeTask(this)">Remove</button>
            `;
            taskList.appendChild(li);
            newTaskInput.value = "";
        }
    };

    window.removeTask = function (element) {
        const li = element.closest("li");
        li.remove();
    };
});
